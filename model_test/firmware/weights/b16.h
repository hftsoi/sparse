//Numpy array shape [5]
//Min -0.757812500000
//Max 0.710937500000
//Number of zeros 0

#ifndef B16_H_
#define B16_H_

#ifndef __SYNTHESIS__
bias16_t b16[5];
#else
bias16_t b16[5] = {0.0859375, 0.3750000, -0.7578125, -0.2734375, 0.7109375};

#endif

#endif
