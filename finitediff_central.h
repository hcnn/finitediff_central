#ifndef FINITEDIFF_CENTRAL_H
#define FINITEDIFF_CENTRAL_H

void finitediff_central(double (*)(double*, int), 
                        double *, 
                        int , 
                        double , 
                        double *);

#endif /* FINITEDIFF_CENTRAL_H */
