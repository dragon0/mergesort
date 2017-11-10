#include "header.h"

record* newRecord(int v) {
    record* r = new record;
    r->value = v;
    return r;
}

