#ifdef __cplusplus
extern "C" {
#endif

#include <stdbool.h>
#include <stddef.h>

bool ta_init(const void *base, const void *limit, const size_t heap_blocks, const size_t split_thresh, const size_t alignment);
void *ta_alloc(void *base, size_t num);
void *ta_calloc(void *base, size_t num, size_t size);
bool ta_free(void *base, void *ptr);

size_t ta_num_free(void *base);
size_t ta_num_used(void *base);
size_t ta_num_fresh(void *base);
bool ta_check(void *base);

#ifdef __cplusplus
}
#endif
