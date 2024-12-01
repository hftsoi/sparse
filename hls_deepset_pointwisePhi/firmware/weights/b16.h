//Numpy array shape [5]
//Min -0.367187500000
//Max 0.460937500000
//Number of zeros 0

#ifndef B16_H_
#define B16_H_

#ifndef __SYNTHESIS__
bias16_t b16[5];
#else
bias16_t b16[5] = {0.1484375, 0.4609375, -0.3671875, -0.2187500, -0.0078125};

#endif

#endif
