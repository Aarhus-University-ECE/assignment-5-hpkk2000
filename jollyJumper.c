#include "jollyjumper.h"
#include <stdbool.h>
#include <malloc.h>

int isJollyJumber(const int seq[], int size) {
  /* Create an array diffs_found equal in size to the size of the sequence that holds boolean values.
 * Any difference found between the numbers in seq is set to true in diffs_found. If all the differences
 * are found in seq then it must be a jolly jumper.
*/

bool diffs_found[size - 1];
  int diff;

  for (int i = 0; i < size - 1; i++) {
    diffs_found[i] = false;
  }

  for (int i = 1; i < size; i++) {
    diff = abs(seq[i - 1] - seq[i]);

    if (diff >= size || diff == 0) {
      return 0;
    }

    if (diffs_found[diff - 1] == false) {
      diffs_found[diff - 1] = true;
    }
  };
  for (int i = 0; i < size - 1; i++) {
    if (diffs_found[i] == false) {
      return 0;
    }
  }
    return 1;
}


