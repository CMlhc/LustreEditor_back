#include "OsOverhead.h"

OsAPIOverhead OsOverhead::getApiOverhead() const
{
    return apiOverhead;
}

void OsOverhead::setApiOverhead(OsAPIOverhead apiOverhead)
{
    this->apiOverhead = apiOverhead;
}

