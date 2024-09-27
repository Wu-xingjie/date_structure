#include "clink.h"

int main(){
    LIST::Clink test;
    test.InsertTail(12);
    test.InsertTail(43);
    test.show();

    test.InsetHead(3);
    test.InsetHead(234);
    test.show();

    return 0;
}