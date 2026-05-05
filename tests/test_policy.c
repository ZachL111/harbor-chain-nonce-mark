#include "policy.h"
#include <assert.h>
#include <string.h>

int main(void) {
    Signal signal_case_1 = {76, 74, 26, 17, 11};
    assert(score_signal(signal_case_1) == 133);
    assert(strcmp(classify_signal(signal_case_1), "review") == 0);
    Signal signal_case_2 = {60, 90, 8, 10, 10};
    assert(score_signal(signal_case_2) == 184);
    assert(strcmp(classify_signal(signal_case_2), "accept") == 0);
    Signal signal_case_3 = {93, 79, 11, 8, 5};
    assert(score_signal(signal_case_3) == 223);
    assert(strcmp(classify_signal(signal_case_3), "accept") == 0);
    return 0;
}
