//Numpy array shape [5]
//Min -0.812500000000
//Max 0.601562500000
//Number of zeros 0

#ifndef B16_H_
#define B16_H_

#ifndef __SYNTHESIS__
bias16_t b16[5];
#else
bias16_t b16[5] = {0.3515625, -0.8125000, 0.6015625, -0.1796875, 0.1796875};

#endif

#endif
