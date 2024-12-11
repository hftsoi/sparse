//Numpy array shape [5]
//Min -0.328125000000
//Max 0.648437500000
//Number of zeros 0

#ifndef B16_H_
#define B16_H_

#ifndef __SYNTHESIS__
bias16_t b16[5];
#else
bias16_t b16[5] = {0.6484375, -0.3281250, -0.2421875, -0.3125000, 0.2421875};

#endif

#endif
