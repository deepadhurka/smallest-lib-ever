/*
************************************************************************
**                 SMALLE - the SMALlest Library Ever
**               Copyright (c) 2013-2021 Deepa Dhurka 
************************************************************************
**  This code is distributed in the hope that it will be useful, 
**  but WITHOUT ANY WARRANTY; without even the implied warranty 
**  of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
**  
**  This code is to be used for learning purposes only.
************************************************************************
*/
#ifndef SMALLE_H
#define SMALLE_H
#include <stdio.h>
#include <stdlib.h>

typedef void
(*smalle_cb)(void);

void
smalle_api(smalle_cb test_func_ptr);

#endif

