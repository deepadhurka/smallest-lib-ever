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
smalle_cb_func()
{
    printf("=============================\n");
    printf("Library smalle CB Says Howdy\n");
    printf("=============================\n");
}

int main()
{
    smalle_api(smalle_cb_func);
    return 0;
}
