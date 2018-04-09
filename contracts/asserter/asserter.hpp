/**
 *  @file
 *  @copyright defined in ngs/LICENSE.txt
 */

#include <ngslib/ngs.hpp>

namespace asserter {
   struct PACKED(assertdef) {
      int8_t   condition;
      int8_t   message_length;
      char     message[];
   };
}
