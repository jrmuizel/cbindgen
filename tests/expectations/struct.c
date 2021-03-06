#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>

struct Opaque;
typedef struct Opaque Opaque;

typedef struct {
  int32_t x;
  float y;
} Normal;

typedef struct {
  int32_t x;
  float y;
} NormalWithZST;

typedef struct {
  int32_t m0;
  float m1;
} TupleRenamed;

typedef struct {
  int32_t x;
  float y;
} TupleNamed;

void root(Opaque *a, Normal b, NormalWithZST c, TupleRenamed d, TupleNamed e);
