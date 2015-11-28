#include "../include/membership_management.h"


void assign_to(Depot* the_depot, Bus* the_bus)
{
    append_to(&(the_bus->memberships), the_depot);
    append_to(&(the_depot->members), the_bus);
}

void remove_assignment_from(Depot* the_depot, Bus* the_bus)
{
    remove_from(&(the_depot->members), the_bus);
    remove_from(&(the_bus->memberships), the_depot);
}