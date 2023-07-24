from bfloat16 import bfloat16


static inline bfloat16 FloatToBFloat16(float float_val) {
#if __BYTE_ORDER__ == __ORDER_BIG_ENDIAN__
    return *reinterpret_cast<tensorflow::bfloat16*>(
        reinterpret_cast<uint16_t*>(&float_val));
#else
    return *reinterpret_cast<tensorflow::bfloat16*>(
        &(reinterpret_cast<uint16_t*>(&float_val)[1]));
#endif
}

import sys
import struct


num1 = float(input("Enter the first number: "))    
num1 = float32(num1)

if sys.byteorder == "big":
    
    first_16_bits = struct.unpack('H', num1[:2])[0]
    return_num = bfloat16(first_16_bits)
else 

