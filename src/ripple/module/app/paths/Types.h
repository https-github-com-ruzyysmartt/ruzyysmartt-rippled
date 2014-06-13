//------------------------------------------------------------------------------
/*
    This file is part of rippled: https://github.com/ripple/rippled
    Copyright (c) 2012, 2013 Ripple Labs Inc.

    Permission to use, copy, modify, and/or distribute this software for any
    purpose  with  or without fee is hereby granted, provided that the above
    copyright notice and this permission notice appear in all copies.

    THE  SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
    WITH  REGARD  TO  THIS  SOFTWARE  INCLUDING  ALL  IMPLIED  WARRANTIES  OF
    MERCHANTABILITY  AND  FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
    ANY  SPECIAL ,  DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
    WHATSOEVER  RESULTING  FROM  LOSS  OF USE, DATA OR PROFITS, WHETHER IN AN
    ACTION  OF  CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
    OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
*/
//==============================================================================

#ifndef RIPPLE_TYPES_H
#define RIPPLE_TYPES_H

namespace ripple {

// account id, currency id, issuer id.
typedef std::tuple <uint160, uint160, uint160> AccountCurrencyIssuer;

std::size_t hash_value (const AccountCurrencyIssuer& asValue);

// Map of account, currency, issuer to node index.
typedef ripple::unordered_map <AccountCurrencyIssuer, unsigned int>
AccountCurrencyIssuerToNodeIndex;

/** Returns a copy of an STAmount with the same currency and issuer but the
    amount set to zero. */
inline STAmount zeroed(const STAmount& a)
{
    return STAmount(a.getCurrency(), a.getIssuer());
}

} // ripple

#endif