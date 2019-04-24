// Copyright (c) 2012-2017, The CryptoNote developers, The Bytecoin developers
//
// This file is part of Bytecoin.
//
// Bytecoin is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// Bytecoin is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with Bytecoin.  If not, see <http://www.gnu.org/licenses/>.

// Copyright (c) 2014-2018, The Monero Project
// Copyright (c) 2018-2019, The TurtleCoin Developers
// Copyright (c) 2018-2019, The DeroGold Assosiation
// Copyright (c) 2018-2019, The BitcoinMono Developers
// Copyright (c) 2019-2019, The Tellurium Developers
// Please see the included LICENSE file for more information


#pragma once

#include <cstddef>
#include <initializer_list>

namespace CryptoNote {
struct CheckpointData {
  uint32_t index;
  const char* blockId;
};

const std::initializer_list<CheckpointData> CHECKPOINTS = {
  {    1000, "4d2ff212d1fec714ac7d6ea3e27fef6f39d054bcd8f4ed712c796f47fc08d781"},
  {    2000, "aabe3acb94105f9b2df72c4337e6eeff00bad73aeeed09e045443b3ac3cddc24"},
  {    3000, "3511acf9a2b212711cbc271ec07066d2294da559a04ec9d47698e08a1ce5d63c"},
  {    4000, "e7d0364a73430e2218c0c1333361c4677d44ee12716181006f28679097d63b42"},
  {    5000, "a14b1d508155c4b1b9916818e1a0a8d151cb048b05e08ac644025aa8605046ed"},
  {    6000, "fcf59c77e646531d67ae07659b724995ea7f5eeda10283674496fab59cc18852"},
  {    7000, "baa02b570c5da765e6110ddaf057ac0280fc346d33f806d68cf52ef5a5271e9c"},
  {    8000, "7f1d09b9e9e434715f65bf492cad01e359dd843131052e2a5b31baafadd206b4"},
  {    9000, "b8ff70ca3fcee58e7bdcf22623b3e0db6e280ee0b80c384fc9cb37258df2bcc1"},
  {   10000, "a393c3be037c1c447cefd2b3b154cbbb95a07e70f664fe3fafc2b20d6f287737"},
  {   11000, "645bb139f74b34b3a28d382f02b226e03c1670caedd8c307519b90ba8d3fd238"},
  {   12000, "b421f9789369c8a52ed5bcf6b9fde558e17ba600187448cf5849b76527f75325"},
  {   13000, "9e78dee622c4c5d7ac27e7f756da0f51fd1762451a28e90059351a7a3c6a8f18"},
  {   14000, "c1ec4a5211b204e57ca9b2d116f21f774a9a382cb26ec8c75c649107f75c1d6d"}
};
}
