#include "finitediff_central.h"

void finitediff_central(TARGET_FUNC_PTR f, 
                        double *x, 
                        size_t n, 
                        double h, 
                        double *g){
    double tmp, f0, f1;
    const double h2 = 2.0*h;
    for (size_t i=0; i<n; i++){
        tmp = x[i]; //store x[i] temporarly
        x[i] += h;  //add bandwidth param
        f0 = f(x,n,NULL); //left 
        x[i] = tmp - h; //reassign x[i] minus bandwith
        f1 = f(x,n,NULL); //right
        x[i] = tmp;  //reassign orginal x[i] for next i
        g[i] = (f0 - f1) / h2; //difference
    }
} 
