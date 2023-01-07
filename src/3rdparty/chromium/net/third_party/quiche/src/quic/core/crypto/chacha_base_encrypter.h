// Copyright (c) 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef QUICHE_QUIC_CORE_CRYPTO_CHACHA_BASE_ENCRYPTER_H_
#define QUICHE_QUIC_CORE_CRYPTO_CHACHA_BASE_ENCRYPTER_H_

#include <cstddef>

#include "net/third_party/quiche/src/quic/core/crypto/aead_base_encrypter.h"
#include "net/third_party/quiche/src/quic/platform/api/quic_export.h"
#include "net/third_party/quiche/src/common/platform/api/quiche_string_piece.h"

namespace quic {

class QUIC_EXPORT_PRIVATE ChaChaBaseEncrypter : public AeadBaseEncrypter {
 public:
  using AeadBaseEncrypter::AeadBaseEncrypter;

  bool SetHeaderProtectionKey(quiche::QuicheStringPiece key) override;
  std::string GenerateHeaderProtectionMask(
      quiche::QuicheStringPiece sample) override;

 private:
  // The key used for packet number encryption.
  unsigned char pne_key_[kMaxKeySize];
};

}  // namespace quic

#endif  // QUICHE_QUIC_CORE_CRYPTO_CHACHA_BASE_ENCRYPTER_H_