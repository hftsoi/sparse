//Numpy array shape [5]
//Min -0.828125000000
//Max 0.984375000000
//Number of zeros 0

#ifndef B16_H_
#define B16_H_

#ifndef __SYNTHESIS__
bias16_t b16[5];
#else
bias16_t b16[5] = {0.9843750, -0.4296875, 0.0390625, -0.4062500, -0.8281250};

#endif

#endif
