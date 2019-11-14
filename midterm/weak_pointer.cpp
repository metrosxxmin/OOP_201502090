//
// Created by Soomin Lee on 2019/11/14.
//

#include "weak_pointer.h"

namespace ptr {
ptr::weak_pointer::weak_pointer() {
    this->ptr = nullptr;
    // ptr을 default값으로 nullptr로 설정
}

weak_pointer::weak_pointer(shared_ref &shared) {
    this->ptr = shared.get();
    // shared의 get으로 student* 값을 ptr의 값으로 설정
}

weak_pointer::weak_pointer(const weak_pointer &weak) {
    this->ptr = weak.ptr;
    // weak의 ptr을 ptr값으로 설정
}

int weak_pointer::is_expired() {
	if (shared_ref::ptr_map.find(this->ptr) != ptr_map.end()) {
		if(ptr_map.find(this->ptr)->second != nullptr) {
			return 0;
		}
	}

    // ptr_map에 자신의 ptr 값이 있는지 확인하고
    // ptr_map의 value인 mgr이 해제되었는지 확인
    // ptr_map에서 ptr을 관리하는 mgr이 있으면(nullptr이 아니면) 0 리턴
    // 아닐 경우 1 리턴

    return 1;
}

student *weak_pointer::get() {
    if (ptr_map.find(this->ptr)->second != nullptr) {
		return this->ptr;
	}
    // ptr_map에서 ptr을 관리하는 mgr이 있으면(nullptr이 아니면) ptr을 리턴
    // 아닌 경우 nullptr 리턴
    return nullptr;
}

}

