# ぷよぷよ(PuyoPuyo) Game
- ## 개요
  1991, 1992년에 처음 나온 낙하물 퍼즐류의 퍼즐 게임을 모티브로 변형된 내용을 구현
- ## 개발환경 및 도구
  Ubuntu 18.04 / vim editor / g++ (Ubuntu 7.4.0 - 1ubuntu1 ~ 18.04.1) 7.4.0
- ## 개발내용
  아래와 같은 동작의 흐름을 가지도록 하여 ぷよぷよ GAME의 변형된 모델을 개발
  
  ![program_flow](./image/program_flow.png)
  
  또한 게임에서 생성되는 block의 종류는 아래의 3가지로 제한
  
  ![using_block](./image/using_block.png)

  Game map의 크기는 5 x 12 이고 block shape와 block color은 랜덤하게 생성
  랜덤 생성을 위해 의미부여되는 정수 값은 아래를 참고
  
  - block shape
  
    1 : fold block
    2 : tree block
    3 : cross block
  - block color
  
    1 : grey (사라지지 않는 color)
    2 : red
    3 : green
    4 : blue
