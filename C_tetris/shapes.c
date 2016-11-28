//filename : main.c
// 2016/11/28
// storing shapes of TETRIS in 4 dimension
// 2016250055 Jinwoo  Hong
// 2016250033 Wooseob  Byeon

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool shape[7][4][4][4] = 

{{{{0,0,0,0},  //1. J_shape
   {0,0,1,0},  //    =
   {0,0,1,0},  //    =
   {0,1,1,0}}, //  = =
   
  {{0,0,0,0},
   {0,0,0,0},
   {1,0,0,0},
   {1,1,1,0}},
    
  {{0,0,0,0},
   {1,1,0,0},
   {1,0,0,0},
   {1,0,0,0}},
    
  {{0,0,0,0},
   {0,0,0,0},
   {1,1,1,0},
   {1,0,0,0}}},
   
 {{{1,0,0,0},  //2. I_shape
   {1,0,0,0},  
   {1,0,0,0},
   {1,0,0,0}},
   
  {{0,0,0,0},
   {0,0,0,0},
   {0,0,0,0},
   {1,1,1,1}}, //= = = =
 
  {{1,0,0,0},  
   {1,0,0,0},
   {1,0,0,0},
   {1,0,0,0}},
   
  {{0,0,0,0},
   {0,0,0,0},
   {0,0,0,0},
   {1,1,1,1}}},
 
 {{{0,0,0,0},  //3. L_shape
   {1,0,0,0},  //=
   {1,0,0,0},  //=
   {1,1,0,0}}, //= =
   
  {{0,0,0,0},
   {0,0,0,0},
   {1,1,1,0},
   {1,0,0,0}},
 
  {{0,0,0,0},
   {0,1,1,0},
   {0,0,1,0},
   {0,0,1,0}},
   
  {{0,0,0,0},
   {0,0,0,0},
   {0,0,1,0},
   {1,1,1,0}}},
   
 {{{0,0,0,0},  //4. O_shape
   {0,0,0,0},
   {1,1,0,0},  //= =
   {1,1,0,0}}, //= =

  {{0,0,0,0},
   {0,0,0,0},
   {1,1,0,0},
   {1,1,0,0}},
   
  {{0,0,0,0},
   {0,0,0,0},
   {1,1,0,0},
   {1,1,0,0}},
   
  {{0,0,0,0},
   {0,0,0,0},
   {1,1,0,0},
   {1,1,0,0}}},
   
 {{{0,0,0,0},  //5. S_shape
   {0,0,0,0},
   {0,1,1,0},  //  = =
   {1,1,0,0}}, //= =

  {{0,0,0,0},
   {0,1,0,0},
   {0,1,1,0},
   {0,0,1,0}},

  {{0,0,0,0},
   {0,0,0,0},
   {0,1,1,0},
   {1,1,0,0}},

  {{0,0,0,0},
   {0,1,0,0},
   {0,1,1,0},
   {0,0,1,0}}},
   
 {{{0,0,0,0},  //6. T_shape
   {0,1,0,0},  //  =
   {1,1,1,0},  //= = =
   {0,0,0,0}},

  {{0,0,0,0},
   {0,1,0,0},
   {0,1,1,0},
   {0,1,0,0}},

  {{0,0,0,0},
   {0,0,0,0},
   {1,1,1,0},
   {0,1,0,0}},

  {{0,0,0,0},
   {0,1,0,0},
   {1,1,0,0},
   {0,1,0,0}}},

 {{{0,0,0,0}, //7. Z_shape
   {0,0,0,0},
   {1,1,0,0}, //= =
   {0,1,1,0}},//  = =

  {{0,0,0,0},
   {0,0,1,0},
   {0,1,1,0},
   {0,1,0,0}},
 
  {{0,0,0,0},
   {0,0,0,0},
   {1,1,0,0},
   {0,1,1,0}},

  {{0,0,0,0},
   {0,0,1,0},
   {0,1,1,0},
   {0,1,0,0}}}};
