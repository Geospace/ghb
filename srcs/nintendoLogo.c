#include <stdint.h>
#include <stdbool.h>

static const uint8_t nintendoLogoHexDump[] = {
  0xCE, 0xED, 0x66, 0x66, 0xCC, 0x0D, 0x00, 0x0B, 0x03, 0x73, 0x00, 0x83,
  0x00, 0x0C, 0x00, 0x0D, 0x00, 0x08, 0x11, 0x1F, 0x88, 0x89, 0x00, 0x0E,
  0xDC, 0xCC, 0x6E, 0xE6, 0xDD, 0xDD, 0xD9, 0x99, 0xBB, 0xBB, 0x67, 0x63,
  0x6E, 0x0E, 0xEC, 0xCC, 0xDD, 0xDC, 0x99, 0x9F, 0xBB, 0xB9, 0x33, 0x3E
};

bool checkNintendoLogo(const uint8_t *nintendo) {
  for (uint32_t i = 0; i < sizeof(nintendoLogoHexDump); ++i) {
    if (nintendoLogoHexDump[i] != *(nintendo + i)) {
      return false;
    }
  }

  return true;
}
