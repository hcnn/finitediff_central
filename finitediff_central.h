#ifndef FINITEDIFF_CENTRAL_H
#define FINITEDIFF_CENTRAL_H

#include "target_func_ptr/target_func_ptr.h"
#include <stddef.h>

void finitediff_central(TARGET_FUNC_PTR, 
                        double *, 
                        size_t , 
                        double , 
                        double *);

#endif /* FINITEDIFF_CENTRAL_H */
