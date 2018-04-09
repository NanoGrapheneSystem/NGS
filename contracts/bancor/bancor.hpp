/**
 *  @file
 *  @copyright defined in ngs/LICENSE.txt
 */
#pragma once

#include <ngslib/ngs.hpp>
#include <ngslib/token.hpp>
#include <ngslib/reflect.hpp>
#include <ngslib/generic_currency.hpp>

#include <bancor/converter.hpp>
#include <currency/currency.hpp>

namespace bancor {
   typedef ngs::generic_currency< ngs::token<N(other),S(4,OTHER)> >  other_currency;
   typedef ngs::generic_currency< ngs::token<N(bancor),S(4,RELAY)> > relay_currency;
   typedef ngs::generic_currency< ngs::token<N(currency),S(4,CUR)> > cur_currency;

   typedef converter<relay_currency, other_currency, cur_currency > example_converter;
} /// bancor

