//Numpy array shape [5]
//Min -0.109375000000
//Max 0.093750000000
//Number of zeros 0

#ifndef B16_H_
#define B16_H_

#ifndef __SYNTHESIS__
bias16_t b16[5];
#else
bias16_t b16[5] = {0.0859375, 0.0390625, -0.1093750, -0.0937500, 0.0937500};

#endif

#endif
