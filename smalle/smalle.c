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
#include "smalle.h"

void
smalle_api(smalle_cb test_func_ptr)
{
    printf("=============================\n");
    printf("Library smalle API Says Hello\n");
    printf("=============================\n");
    test_func_ptr();
}    
