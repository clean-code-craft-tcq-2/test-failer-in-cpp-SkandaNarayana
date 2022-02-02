#include "tshirts.h"

TShirtSize size(const int cms) {
    TShirtSize sizeName = TShirtSize::Undefined;
    if(cms <= 38) {
        sizeName = Small;
    } else if(cms > 38 && cms < 42) {
        sizeName = Medium;
    } else if(cms >= 42) {
        sizeName = Large;
    }
    return sizeName;
}