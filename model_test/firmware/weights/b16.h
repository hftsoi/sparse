//Numpy array shape [5]
//Min -0.992187500000
//Max 0.992187500000
//Number of zeros 0

#ifndef B16_H_
#define B16_H_

#ifndef __SYNTHESIS__
bias16_t b16[5];
#else
bias16_t b16[5] = {0.8828125, 0.9921875, -0.9843750, -0.9921875, 0.9843750};

#endif

#endif
