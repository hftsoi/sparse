//Numpy array shape [5]
//Min -0.976562500000
//Max 0.828125000000
//Number of zeros 0

#ifndef B16_H_
#define B16_H_

#ifndef __SYNTHESIS__
bias16_t b16[5];
#else
bias16_t b16[5] = {0.7968750, 0.8281250, -0.1093750, -0.0312500, -0.9765625};

#endif

#endif
