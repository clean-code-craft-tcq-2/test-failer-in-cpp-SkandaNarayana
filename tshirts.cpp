#include "tshirts.h"

TShirtSize size(const int cms) {
    TShirtSize sizeName;
    if(cms <= 38) {
        sizeName = small;
    } else if(cms > 38 && cms < 42) {
        sizeName = medium;
    } else if(cms >= 42) {
        sizeName = large;
    }
    return sizeName;
}