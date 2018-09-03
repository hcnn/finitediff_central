#ifndef FINITEDIFF_CENTRAL_H
#define FINITEDIFF_CENTRAL_H

#include <stddef.h>

void finitediff_central(double (*)(const double*, size_t), 
                        double *, 
                        size_t , 
                        double , 
                        double *);

#endif /* FINITEDIFF_CENTRAL_H */
