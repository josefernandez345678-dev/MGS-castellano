#include "mod_plugins.h"

static void truco_vida(void) {
    if (psx_mod_game_started()) psx_mod_write_half(0x800B5F3Eu, 0x00FAu);
}

static void truco_municion(void) {
    if (!psx_mod_game_started()) return;
    psx_mod_write_half(0x800B5F4Au, 0x0063u);
    psx_mod_write_half(0x800B5F4Cu, 0x0064u);
    psx_mod_write_half(0x800ACB7Cu, 0x000Du);
}

static void truco_explosivos(void) {
    if (!psx_mod_game_started()) return;
    psx_mod_write_half(0x800B5F56u, 0x0063u);
    psx_mod_write_half(0x800B5F58u, 0x0063u);
    psx_mod_write_half(0x800B5F5Au, 0x0063u);
}

static void truco_oxigeno(void) {
    if (psx_mod_game_started()) psx_mod_write_half(0x800ACBC4u, 0x03E7u);
}

static void truco_objetos(void) {
    if (!psx_mod_game_started()) return;
    psx_mod_write_half(0x800B5F8Cu, 0x03E7u);
    psx_mod_write_half(0x800B5FA2u, 0x03E7u);
    psx_mod_write_half(0x800B5F8Eu, 0x03E7u);
    psx_mod_write_half(0x800B5FA4u, 0x03E7u);
    psx_mod_write_half(0x800B5F90u, 0x03E7u);
    psx_mod_write_half(0x800B5FA6u, 0x03E7u);
}

static void truco_invisible(void) {
    if (!psx_mod_game_started()) return;
    psx_mod_write_half(0x800ACBA0u, 0x0000u);
    psx_mod_write_half(0x800ACBA2u, 0x0000u);
}

static void truco_alerta(void) {
    if (psx_mod_game_started()) psx_mod_write_half(0x800ACB90u, 0x0000u);
}

PSX_MOD_CONSTRUCTOR(registrar_trucos_mgs) {
    (void)psx_mod_register_vblank_plugin("mgs.es.trucos.vida", truco_vida);
    (void)psx_mod_register_vblank_plugin("mgs.es.trucos.municion", truco_municion);
    (void)psx_mod_register_vblank_plugin("mgs.es.trucos.explosivos", truco_explosivos);
    (void)psx_mod_register_vblank_plugin("mgs.es.trucos.oxigeno", truco_oxigeno);
    (void)psx_mod_register_vblank_plugin("mgs.es.trucos.objetos", truco_objetos);
    (void)psx_mod_register_vblank_plugin("mgs.es.trucos.invisible", truco_invisible);
    (void)psx_mod_register_vblank_plugin("mgs.es.trucos.alerta", truco_alerta);
}
