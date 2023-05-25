#include <iostream>
#include "lib.h"
void funzione( float a[], float max, int dim) {


    for (int i=0;i<dim;i++){
        if (a[i]>max) {
            max=a[i];
        }

        } std::cout<<max;
    }
