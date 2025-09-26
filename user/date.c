#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"
#include "time.h"

static const char* month_name[] = {
    "Jan", "Feb", "Mar", "Apr", "May", "June",
    "July", "Aug", "Sep", "Oct", "Nov", "Dec"
};

int main() {
    uint64 c = clock() / 1000000000ULL;
    uint64 local_date = c - (7 * 3600);
    datetime date = to_datetime(local_date);

    printf("%s %d %d:%d:%d PDT %d\n", 
    month_name[date.month-1], date.day, 
    date.hour, date.minute, date.second, 
    date.year);
    return 0;
}
