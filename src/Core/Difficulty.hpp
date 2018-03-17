// Copyright (c) 2012-2018, The CryptoNote developers, The Bytecoin developers.
// Licensed under the GNU Lesser General Public License. See LICENSING.md for details.

#pragma once

#include <cstdint>
#include <vector>

#include "CryptoNote.hpp"

namespace bytecoin {

bool check_hash(const crypto::Hash &hash, Difficulty difficulty);
}
