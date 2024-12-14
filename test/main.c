#include "cstruct.h"


main() {
    iConList myList = iConlist_init(4);
    iConlist_print(myList, ", ");
    iConlist_append(myList, 5);
    iConlist_print(myList, ", ");
}
