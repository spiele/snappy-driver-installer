/*
This file is part of Snappy Driver Installer.

Snappy Driver Installer is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

Snappy Driver Installer is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied wa��������rranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with Snappy Driver Installer.  If not, see <http://www.gnu.org/licenses/>.
*/

#define DEF_VAL(a) {TEXT(a),0,0},
#define DEF_STR(a) {TEXT(a),0,0},

enum
{
    BOX_MAINWND=0,
    BOX_POPUP,
    BOX_PROGR,
    BOX_PANEL,
    BOX_PANEL1,
    BOX_PANEL2,
    BOX_PANEL3,
    BOX_PANEL4,
    BOX_PANEL5,
    BOX_PANEL6,
    BOX_PANEL7,
    BOX_PANEL8,
    BOX_PANEL9,
    BOX_PANEL10,
    BOX_PANEL11,

    BOX_BUTTON,
    BOX_BUTTON_H,
    BOX_DRVLIST,
    BOX_DRVITEM,
    BOX_DRVITEM_H,

    BOX_DRVITEM_BN,
    BOX_DRVITEM_BN_H,
    BOX_DRVITEM_SN,
    BOX_DRVITEM_SN_H,
    BOX_DRVITEM_WN,
    BOX_DRVITEM_WN_H,

    BOX_DRVITEM_BC,
    BOX_DRVITEM_BC_H,
    BOX_DRVITEM_SC,
    BOX_DRVITEM_SC_H,
    BOX_DRVITEM_WC,
    BOX_DRVITEM_WC_H,

    BOX_DRVITEM_BO,
    BOX_DRVITEM_BO_H,
    BOX_DRVITEM_SO,
    BOX_DRVITEM_SO_H,
    BOX_DRVITEM_WO,
    BOX_DRVITEM_WO_H,

    BOX_DRVITEM_MS,
    BOX_DRVITEM_MS_H,
    BOX_DRVITEM_IN,
    BOX_DRVITEM_IN_H,
    BOX_DRVITEM_DP,
    BOX_DRVITEM_DP_H,

    BOX_DRVITEM_NM,
    BOX_DRVITEM_NM_H,
    BOX_DRVITEM_NU,
    BOX_DRVITEM_NU_H,
    BOX_DRVITEM_NS,
    BOX_DRVITEM_NS_H,

    BOX_DRVITEM_VI,
    BOX_DRVITEM_VI_H,
    BOX_DRVITEM_IF,
    BOX_DRVITEM_IF_H,

    BOX_DRVITEM_D0,
    BOX_DRVITEM_D0_H,
    BOX_DRVITEM_D1,
    BOX_DRVITEM_D1_H,
    BOX_DRVITEM_D2,
    BOX_DRVITEM_D2_H,
    BOX_DRVITEM_DE,
    BOX_DRVITEM_DE_H,

    BOX_PROGR_S,
    BOX_NOUPDATES,
    BOX_NOUPDATES_H,
    BOX_NUM
};
#define ICON_NUM             8

enum
{
    THEME_NAME=0,

// Anchor
    top_left,
    top_right,
    bottom_left,
    bottom_right,
    center_top,
    center_bottom,
    center_left,
    center_right,
    center,

// Fill
    none,
    htile,
    vtile,
    htile_vtile,
    hstr_vstr,
    hstr,
    vstr,
    htile_vstr,
    vtile_hstr,
    hstra,
    vstra,
    htile_vstra,
    vtile_hstra,

// Font
    FONT_NAME,
    FONT_SIZE,

// Main window
    MAINWND_TRANSPARENCY,
    MAINWND_TEXT_COLOR,
    MAINWND_WX,
    MAINWND_WY,
    MAINWND_INSIDE_COLOR,
    MAINWND_OUTLINE_COLOR,
    MAINWND_OUTLINE_WIDTH,
    MAINWND_OUTLINE_ROUND,
    MAINWND_BITMAP_FILENAME,
    MAINWND_BITMAP_ANCHOR,
    MAINWND_BITMAP_FILL,

// Popup
    POPUP_TRANSPARENCY,
    POPUP_TEXT_COLOR,
    POPUP_OFSX,
    POPUP_OFSY,
    POPUP_WX,
    POPUP_WY,
    POPUP_INSIDE_COLOR,
    POPUP_OUTLINE_COLOR,
    POPUP_OUTLINE_WIDTH,
    POPUP_OUTLINE_ROUND,
    POPUP_BITMAP_FILENAME,
    POPUP_BITMAP_ANCHOR,
    POPUP_BITMAP_FILL,

// Popup, driver comparsion
    POPUP_HWID_COLOR,
    POPUP_CMP_BETTER_COLOR,
    POPUP_CMP_INVALID_COLOR,

// Popup, driver list
    POPUP_LST_BETTER_COLOR,
    POPUP_LST_WORSE_COLOR,
    POPUP_LST_INVALID_COLOR,

// Progress bar (active)
    PROGR_INSIDE_COLOR,
    PROGR_OUTLINE_COLOR,
    PROGR_OUTLINE_WIDTH,
    PROGR_OUTLINE_ROUND,
    PROGR_BITMAP_FILENAME,
    PROGR_BITMAP_ANCHOR,
    PROGR_BITMAP_FILL,

// Progress bar (stopping)
    PROGR_S_INSIDE_COLOR,
    PROGR_S_OUTLINE_COLOR,
    PROGR_S_OUTLINE_WIDTH,
    PROGR_S_OUTLINE_ROUND,
    PROGR_S_BITMAP_FILENAME,
    PROGR_S_BITMAP_ANCHOR,
    PROGR_S_BITMAP_FILL,

// Left panel
    PANEL_OFSX,
    PANEL_OFSY,
    PANEL_WX,
    PANEL_WY,
    PANEL_INSIDE_COLOR,
    PANEL_OUTLINE_COLOR,
    PANEL_OUTLINE_WIDTH,
    PANEL_OUTLINE_ROUND,
    PANEL_BITMAP_FILENAME,
    PANEL_BITMAP_ANCHOR,
    PANEL_BITMAP_FILL,

// Panel, sysinfo
    PANEL1_OFSX,
    PANEL1_OFSY,
    PANEL1_WX,
    PANEL1_WY,
    PANEL1_INSIDE_COLOR,
    PANEL1_OUTLINE_COLOR,
    PANEL1_OUTLINE_WIDTH,
    PANEL1_OUTLINE_ROUND,
    PANEL1_BITMAP_FILENAME,
    PANEL1_BITMAP_ANCHOR,
    PANEL1_BITMAP_FILL,

// Panel, install
    PANEL2_OFSX,
    PANEL2_OFSY,
    PANEL2_WX,
    PANEL2_WY,
    PANEL2_INSIDE_COLOR,
    PANEL2_OUTLINE_COLOR,
    PANEL2_OUTLINE_WIDTH,
    PANEL2_OUTLINE_ROUND,
    PANEL2_BITMAP_FILENAME,
    PANEL2_BITMAP_ANCHOR,
    PANEL2_BITMAP_FILL,

// Panel, lang_theme
    PANEL3_OFSX,
    PANEL3_OFSY,
    PANEL3_WX,
    PANEL3_WY,
    PANEL3_INSIDE_COLOR,
    PANEL3_OUTLINE_COLOR,
    PANEL3_OUTLINE_WIDTH,
    PANEL3_OUTLINE_ROUND,
    PANEL3_BITMAP_FILENAME,
    PANEL3_BITMAP_ANCHOR,
    PANEL3_BITMAP_FILL,

// Panel, actions
    PANEL4_OFSX,
    PANEL4_OFSY,
    PANEL4_WX,
    PANEL4_WY,
    PANEL4_INSIDE_COLOR,
    PANEL4_OUTLINE_COLOR,
    PANEL4_OUTLINE_WIDTH,
    PANEL4_OUTLINE_ROUND,
    PANEL4_BITMAP_FILENAME,
    PANEL4_BITMAP_ANCHOR,
    PANEL4_BITMAP_FILL,

// Panel, filters (found)
    PANEL5_OFSX,
    PANEL5_OFSY,
    PANEL5_WX,
    PANEL5_WY,
    PANEL5_INSIDE_COLOR,
    PANEL5_OUTLINE_COLOR,
    PANEL5_OUTLINE_WIDTH,
    PANEL5_OUTLINE_ROUND,
    PANEL5_BITMAP_FILENAME,
    PANEL5_BITMAP_ANCHOR,
    PANEL5_BITMAP_FILL,

// Panel, filters (not found)
    PANEL6_OFSX,
    PANEL6_OFSY,
    PANEL6_WX,
    PANEL6_WY,
    PANEL6_INSIDE_COLOR,
    PANEL6_OUTLINE_COLOR,
    PANEL6_OUTLINE_WIDTH,
    PANEL6_OUTLINE_ROUND,
    PANEL6_BITMAP_FILENAME,
    PANEL6_BITMAP_ANCHOR,
    PANEL6_BITMAP_FILL,

// Panel, filters (special)
    PANEL7_OFSX,
    PANEL7_OFSY,
    PANEL7_WX,
    PANEL7_WY,
    PANEL7_INSIDE_COLOR,
    PANEL7_OUTLINE_COLOR,
    PANEL7_OUTLINE_WIDTH,
    PANEL7_OUTLINE_ROUND,
    PANEL7_BITMAP_FILENAME,
    PANEL7_BITMAP_ANCHOR,
    PANEL7_BITMAP_FILL,

// Panel, revision
    PANEL8_OFSX,
    PANEL8_OFSY,
    PANEL8_WX,
    PANEL8_WY,
    PANEL8_INSIDE_COLOR,
    PANEL8_OUTLINE_COLOR,
    PANEL8_OUTLINE_WIDTH,
    PANEL8_OUTLINE_ROUND,
    PANEL8_BITMAP_FILENAME,
    PANEL8_BITMAP_ANCHOR,
    PANEL8_BITMAP_FILL,

// Panel, selectall_selectnone
    PANEL9_OFSX,
    PANEL9_OFSY,
    PANEL9_WX,
    PANEL9_WY,
    PANEL9_INSIDE_COLOR,
    PANEL9_OUTLINE_COLOR,
    PANEL9_OUTLINE_WIDTH,
    PANEL9_OUTLINE_ROUND,
    PANEL9_BITMAP_FILENAME,
    PANEL9_BITMAP_ANCHOR,
    PANEL9_BITMAP_FILL,

// Panel, selectnone
    PANEL10_OFSX,
    PANEL10_OFSY,
    PANEL10_WX,
    PANEL10_WY,
    PANEL10_INSIDE_COLOR,
    PANEL10_OUTLINE_COLOR,
    PANEL10_OUTLINE_WIDTH,
    PANEL10_OUTLINE_ROUND,
    PANEL10_BITMAP_FILENAME,
    PANEL10_BITMAP_ANCHOR,
    PANEL10_BITMAP_FILL,

// Panel, options
    PANEL11_OFSX,
    PANEL11_OFSY,
    PANEL11_WX,
    PANEL11_WY,
    PANEL11_INSIDE_COLOR,
    PANEL11_OUTLINE_COLOR,
    PANEL11_OUTLINE_WIDTH,
    PANEL11_OUTLINE_ROUND,
    PANEL11_BITMAP_FILENAME,
    PANEL11_BITMAP_ANCHOR,
    PANEL11_BITMAP_FILL,

// Items on left panel
    PNLITEM_OFSX,
    PNLITEM_OFSY,
    PNLITEM_WY,

// Checkboxes on left panel
    CHKBOX_TEXT_OFSX,
    CHKBOX_TEXT_COLOR,
    CHKBOX_TEXT_COLOR_H,
    CHKBOX_SIZE,
    BUTTON_BITMAP_CHECKED,
    BUTTON_BITMAP_CHECKED_H,
    BUTTON_BITMAP_UNCHECKED,
    BUTTON_BITMAP_UNCHECKED_H,

// Buttons on left panel
    BUTTON_INSIDE_COLOR,
    BUTTON_OUTLINE_COLOR,
    BUTTON_OUTLINE_WIDTH,
    BUTTON_OUTLINE_ROUND,
    BUTTON_BITMAP_FILENAME,
    BUTTON_BITMAP_ANCHOR,
    BUTTON_BITMAP_FILL,
    BUTTON_INSIDE_COLOR_H,
    BUTTON_OUTLINE_COLOR_H,
    BUTTON_OUTLINE_WIDTH_H,
    BUTTON_OUTLINE_ROUND_H,
    BUTTON_BITMAP_FILENAME_H,
    BUTTON_BITMAP_ANCHOR_H,
    BUTTON_BITMAP_FILL_H,

// Driver list
    DRVLIST_OFSX,
    DRVLIST_OFSY,
    DRVLIST_INSIDE_COLOR,
    DRVLIST_OUTLINE_COLOR,
    DRVLIST_OUTLINE_WIDTH,
    DRVLIST_OUTLINE_ROUND,
    DRVLIST_BITMAP_FILENAME,
    DRVLIST_BITMAP_ANCHOR,
    DRVLIST_BITMAP_FILL,

// Driver items
    DRVITEM_WX,
    DRVITEM_WY,
    DRVITEM_OFSX,
    DRVITEM_OFSY,
    ITEM_DIST_Y0,
    ITEM_DIST_Y1,

// Driver item content
    ITEM_CHECKBOX_OFS_X,
    ITEM_CHECKBOX_OFS_Y,
    ITEM_CHECKBOX_SIZE,
    ITEM_ICON_OFS_X,
    ITEM_ICON_OFS_Y,
    ITEM_ICON_SIZE,
    ITEM_TEXT_OFS_X,
    ITEM_TEXT_OFS_Y,
    ITEM_TEXT_DIST_Y,
    ITEM_EXPAND_UP,
    ITEM_EXPAND_UP_H,
    ITEM_EXPAND_DOWN,
    ITEM_EXPAND_DOWN_H,

// Driver item (generic style)
    DRVITEM_INSIDE_COLOR,
    DRVITEM_OUTLINE_COLOR,
    DRVITEM_OUTLINE_WIDTH,
    DRVITEM_OUTLINE_ROUND,
    DRVITEM_BITMAP_FILENAME,
    DRVITEM_BITMAP_ANCHOR,
    DRVITEM_BITMAP_FILL,
    DRVITEM_INSIDE_COLOR_H,
    DRVITEM_OUTLINE_COLOR_H,
    DRVITEM_OUTLINE_WIDTH_H,
    DRVITEM_OUTLINE_ROUND_H,
    DRVITEM_BITMAP_FILENAME_H,
    DRVITEM_BITMAP_ANCHOR_H,
    DRVITEM_BITMAP_FILL_H,
    DRVITEM_TEXT1_COLOR,
    DRVITEM_TEXT2_COLOR,

// Info (indexing,snapshot,installation)
    DRVITEM_INSIDE_COLOR_IF,
    DRVITEM_OUTLINE_COLOR_IF,
    DRVITEM_OUTLINE_WIDTH_IF,
    DRVITEM_OUTLINE_ROUND_IF,
    DRVITEM_BITMAP_FILENAME_IF,
    DRVITEM_BITMAP_ANCHOR_IF,
    DRVITEM_BITMAP_FILL_IF,
    DRVITEM_INSIDE_COLOR_IF_H,
    DRVITEM_OUTLINE_COLOR_IF_H,
    DRVITEM_OUTLINE_WIDTH_IF_H,
    DRVITEM_OUTLINE_ROUND_IF_H,
    DRVITEM_BITMAP_FILENAME_IF_H,
    DRVITEM_BITMAP_ANCHOR_IF_H,
    DRVITEM_BITMAP_FILL_IF_H,
    DRVITEM_TEXT1_COLOR_IF,
    DRVITEM_TEXT2_COLOR_IF,

// No updates
    DRVITEM_INSIDE_COLOR_IU,
    DRVITEM_OUTLINE_COLOR_IU,
    DRVITEM_OUTLINE_WIDTH_IU,
    DRVITEM_OUTLINE_ROUND_IU,
    DRVITEM_BITMAP_FILENAME_IU,
    DRVITEM_BITMAP_ANCHOR_IU,
    DRVITEM_BITMAP_FILL_IU,
    DRVITEM_INSIDE_COLOR_IU_H,
    DRVITEM_OUTLINE_COLOR_IU_H,
    DRVITEM_OUTLINE_WIDTH_IU_H,
    DRVITEM_OUTLINE_ROUND_IU_H,
    DRVITEM_BITMAP_FILENAME_IU_H,
    DRVITEM_BITMAP_ANCHOR_IU_H,
    DRVITEM_BITMAP_FILL_IU_H,
    DRVITEM_TEXT1_COLOR_IU,
    DRVITEM_TEXT2_COLOR_IU,

// Virus alert
    DRVITEM_INSIDE_COLOR_VR,
    DRVITEM_OUTLINE_COLOR_VR,
    DRVITEM_OUTLINE_WIDTH_VR,
    DRVITEM_OUTLINE_ROUND_VR,
    DRVITEM_BITMAP_FILENAME_VR,
    DRVITEM_BITMAP_ANCHOR_VR,
    DRVITEM_BITMAP_FILL_VR,
    DRVITEM_INSIDE_COLOR_VR_H,
    DRVITEM_OUTLINE_COLOR_VR_H,
    DRVITEM_OUTLINE_WIDTH_VR_H,
    DRVITEM_OUTLINE_ROUND_VR_H,
    DRVITEM_BITMAP_FILENAME_VR_H,
    DRVITEM_BITMAP_ANCHOR_VR_H,
    DRVITEM_BITMAP_FILL_VR_H,
    DRVITEM_TEXT1_COLOR_VR,
    DRVITEM_TEXT2_COLOR_VR,

// Driver installation
    DRVITEM_INSIDE_COLOR_D0,
    DRVITEM_OUTLINE_COLOR_D0,
    DRVITEM_OUTLINE_WIDTH_D0,
    DRVITEM_OUTLINE_ROUND_D0,
    DRVITEM_BITMAP_FILENAME_D0,
    DRVITEM_BITMAP_ANCHOR_D0,
    DRVITEM_BITMAP_FILL_D0,
    DRVITEM_INSIDE_COLOR_D0_H,
    DRVITEM_OUTLINE_COLOR_D0_H,
    DRVITEM_OUTLINE_WIDTH_D0_H,
    DRVITEM_OUTLINE_ROUND_D0_H,
    DRVITEM_BITMAP_FILENAME_D0_H,
    DRVITEM_BITMAP_ANCHOR_D0_H,
    DRVITEM_BITMAP_FILL_D0_H,
    DRVITEM_TEXT1_COLOR_D0,
    DRVITEM_TEXT2_COLOR_D0,

// Driver installed
    DRVITEM_INSIDE_COLOR_D1,
    DRVITEM_OUTLINE_COLOR_D1,
    DRVITEM_OUTLINE_WIDTH_D1,
    DRVITEM_OUTLINE_ROUND_D1,
    DRVITEM_BITMAP_FILENAME_D1,
    DRVITEM_BITMAP_ANCHOR_D1,
    DRVITEM_BITMAP_FILL_D1,
    DRVITEM_INSIDE_COLOR_D1_H,
    DRVITEM_OUTLINE_COLOR_D1_H,
    DRVITEM_OUTLINE_WIDTH_D1_H,
    DRVITEM_OUTLINE_ROUND_D1_H,
    DRVITEM_BITMAP_FILENAME_D1_H,
    DRVITEM_BITMAP_ANCHOR_D1_H,
    DRVITEM_BITMAP_FILL_D1_H,
    DRVITEM_TEXT1_COLOR_D1,
    DRVITEM_TEXT2_COLOR_D1,

// Driver installed (reboot required)
    DRVITEM_INSIDE_COLOR_D2,
    DRVITEM_OUTLINE_COLOR_D2,
    DRVITEM_OUTLINE_WIDTH_D2,
    DRVITEM_OUTLINE_ROUND_D2,
    DRVITEM_BITMAP_FILENAME_D2,
    DRVITEM_BITMAP_ANCHOR_D2,
    DRVITEM_BITMAP_FILL_D2,
    DRVITEM_INSIDE_COLOR_D2_H,
    DRVITEM_OUTLINE_COLOR_D2_H,
    DRVITEM_OUTLINE_WIDTH_D2_H,
    DRVITEM_OUTLINE_ROUND_D2_H,
    DRVITEM_BITMAP_FILENAME_D2_H,
    DRVITEM_BITMAP_ANCHOR_D2_H,
    DRVITEM_BITMAP_FILL_D2_H,
    DRVITEM_TEXT1_COLOR_D2,
    DRVITEM_TEXT2_COLOR_D2,

// Driver installation error
    DRVITEM_INSIDE_COLOR_DE,
    DRVITEM_OUTLINE_COLOR_DE,
    DRVITEM_OUTLINE_WIDTH_DE,
    DRVITEM_OUTLINE_ROUND_DE,
    DRVITEM_BITMAP_FILENAME_DE,
    DRVITEM_BITMAP_ANCHOR_DE,
    DRVITEM_BITMAP_FILL_DE,
    DRVITEM_INSIDE_COLOR_DE_H,
    DRVITEM_OUTLINE_COLOR_DE_H,
    DRVITEM_OUTLINE_WIDTH_DE_H,
    DRVITEM_OUTLINE_ROUND_DE_H,
    DRVITEM_BITMAP_FILENAME_DE_H,
    DRVITEM_BITMAP_ANCHOR_DE_H,
    DRVITEM_BITMAP_FILL_DE_H,
    DRVITEM_TEXT1_COLOR_DE,
    DRVITEM_TEXT2_COLOR_DE,

// BETTER_NEW
    DRVITEM_INSIDE_COLOR_BN,
    DRVITEM_OUTLINE_COLOR_BN,
    DRVITEM_OUTLINE_WIDTH_BN,
    DRVITEM_OUTLINE_ROUND_BN,
    DRVITEM_BITMAP_FILENAME_BN,
    DRVITEM_BITMAP_ANCHOR_BN,
    DRVITEM_BITMAP_FILL_BN,
    DRVITEM_INSIDE_COLOR_BN_H,
    DRVITEM_OUTLINE_COLOR_BN_H,
    DRVITEM_OUTLINE_WIDTH_BN_H,
    DRVITEM_OUTLINE_ROUND_BN_H,
    DRVITEM_BITMAP_FILENAME_BN_H,
    DRVITEM_BITMAP_ANCHOR_BN_H,
    DRVITEM_BITMAP_FILL_BN_H,
    DRVITEM_TEXT1_COLOR_BN,
    DRVITEM_TEXT2_COLOR_BN,

// SAME_NEW
    DRVITEM_INSIDE_COLOR_SN,
    DRVITEM_OUTLINE_COLOR_SN,
    DRVITEM_OUTLINE_WIDTH_SN,
    DRVITEM_OUTLINE_ROUND_SN,
    DRVITEM_BITMAP_FILENAME_SN,
    DRVITEM_BITMAP_ANCHOR_SN,
    DRVITEM_BITMAP_FILL_SN,
    DRVITEM_INSIDE_COLOR_SN_H,
    DRVITEM_OUTLINE_COLOR_SN_H,
    DRVITEM_OUTLINE_WIDTH_SN_H,
    DRVITEM_OUTLINE_ROUND_SN_H,
    DRVITEM_BITMAP_FILENAME_SN_H,
    DRVITEM_BITMAP_ANCHOR_SN_H,
    DRVITEM_BITMAP_FILL_SN_H,
    DRVITEM_TEXT1_COLOR_SN,
    DRVITEM_TEXT2_COLOR_SN,

// WORSE_NEW
    DRVITEM_INSIDE_COLOR_WN,
    DRVITEM_OUTLINE_COLOR_WN,
    DRVITEM_OUTLINE_WIDTH_WN,
    DRVITEM_OUTLINE_ROUND_WN,
    DRVITEM_BITMAP_FILENAME_WN,
    DRVITEM_BITMAP_ANCHOR_WN,
    DRVITEM_BITMAP_FILL_WN,
    DRVITEM_INSIDE_COLOR_WN_H,
    DRVITEM_OUTLINE_COLOR_WN_H,
    DRVITEM_OUTLINE_WIDTH_WN_H,
    DRVITEM_OUTLINE_ROUND_WN_H,
    DRVITEM_BITMAP_FILENAME_WN_H,
    DRVITEM_BITMAP_ANCHOR_WN_H,
    DRVITEM_BITMAP_FILL_WN_H,
    DRVITEM_TEXT1_COLOR_WN,
    DRVITEM_TEXT2_COLOR_WN,

// BETTER_CUR
    DRVITEM_INSIDE_COLOR_BC,
    DRVITEM_OUTLINE_COLOR_BC,
    DRVITEM_OUTLINE_WIDTH_BC,
    DRVITEM_OUTLINE_ROUND_BC,
    DRVITEM_BITMAP_FILENAME_BC,
    DRVITEM_BITMAP_ANCHOR_BC,
    DRVITEM_BITMAP_FILL_BC,
    DRVITEM_INSIDE_COLOR_BC_H,
    DRVITEM_OUTLINE_COLOR_BC_H,
    DRVITEM_OUTLINE_WIDTH_BC_H,
    DRVITEM_OUTLINE_ROUND_BC_H,
    DRVITEM_BITMAP_FILENAME_BC_H,
    DRVITEM_BITMAP_ANCHOR_BC_H,
    DRVITEM_BITMAP_FILL_BC_H,
    DRVITEM_TEXT1_COLOR_BC,
    DRVITEM_TEXT2_COLOR_BC,

// SAME_CUR
    DRVITEM_INSIDE_COLOR_SC,
    DRVITEM_OUTLINE_COLOR_SC,
    DRVITEM_OUTLINE_WIDTH_SC,
    DRVITEM_OUTLINE_ROUND_SC,
    DRVITEM_BITMAP_FILENAME_SC,
    DRVITEM_BITMAP_ANCHOR_SC,
    DRVITEM_BITMAP_FILL_SC,
    DRVITEM_INSIDE_COLOR_SC_H,
    DRVITEM_OUTLINE_COLOR_SC_H,
    DRVITEM_OUTLINE_WIDTH_SC_H,
    DRVITEM_OUTLINE_ROUND_SC_H,
    DRVITEM_BITMAP_FILENAME_SC_H,
    DRVITEM_BITMAP_ANCHOR_SC_H,
    DRVITEM_BITMAP_FILL_SC_H,
    DRVITEM_TEXT1_COLOR_SC,
    DRVITEM_TEXT2_COLOR_SC,

// WORSE_CUR
    DRVITEM_INSIDE_COLOR_WC,
    DRVITEM_OUTLINE_COLOR_WC,
    DRVITEM_OUTLINE_WIDTH_WC,
    DRVITEM_OUTLINE_ROUND_WC,
    DRVITEM_BITMAP_FILENAME_WC,
    DRVITEM_BITMAP_ANCHOR_WC,
    DRVITEM_BITMAP_FILL_WC,
    DRVITEM_INSIDE_COLOR_WC_H,
    DRVITEM_OUTLINE_COLOR_WC_H,
    DRVITEM_OUTLINE_WIDTH_WC_H,
    DRVITEM_OUTLINE_ROUND_WC_H,
    DRVITEM_BITMAP_FILENAME_WC_H,
    DRVITEM_BITMAP_ANCHOR_WC_H,
    DRVITEM_BITMAP_FILL_WC_H,
    DRVITEM_TEXT1_COLOR_WC,
    DRVITEM_TEXT2_COLOR_WC,

// BETTER_OLD
    DRVITEM_INSIDE_COLOR_BO,
    DRVITEM_OUTLINE_COLOR_BO,
    DRVITEM_OUTLINE_WIDTH_BO,
    DRVITEM_OUTLINE_ROUND_BO,
    DRVITEM_BITMAP_FILENAME_BO,
    DRVITEM_BITMAP_ANCHOR_BO,
    DRVITEM_BITMAP_FILL_BO,
    DRVITEM_INSIDE_COLOR_BO_H,
    DRVITEM_OUTLINE_COLOR_BO_H,
    DRVITEM_OUTLINE_WIDTH_BO_H,
    DRVITEM_OUTLINE_ROUND_BO_H,
    DRVITEM_BITMAP_FILENAME_BO_H,
    DRVITEM_BITMAP_ANCHOR_BO_H,
    DRVITEM_BITMAP_FILL_BO_H,
    DRVITEM_TEXT1_COLOR_BO,
    DRVITEM_TEXT2_COLOR_BO,

// SAME_OLD
    DRVITEM_INSIDE_COLOR_SO,
    DRVITEM_OUTLINE_COLOR_SO,
    DRVITEM_OUTLINE_WIDTH_SO,
    DRVITEM_OUTLINE_ROUND_SO,
    DRVITEM_BITMAP_FILENAME_SO,
    DRVITEM_BITMAP_ANCHOR_SO,
    DRVITEM_BITMAP_FILL_SO,
    DRVITEM_INSIDE_COLOR_SO_H,
    DRVITEM_OUTLINE_COLOR_SO_H,
    DRVITEM_OUTLINE_WIDTH_SO_H,
    DRVITEM_OUTLINE_ROUND_SO_H,
    DRVITEM_BITMAP_FILENAME_SO_H,
    DRVITEM_BITMAP_ANCHOR_SO_H,
    DRVITEM_BITMAP_FILL_SO_H,
    DRVITEM_TEXT1_COLOR_SO,
    DRVITEM_TEXT2_COLOR_SO,

// WORSE_OLD
    DRVITEM_INSIDE_COLOR_WO,
    DRVITEM_OUTLINE_COLOR_WO,
    DRVITEM_OUTLINE_WIDTH_WO,
    DRVITEM_OUTLINE_ROUND_WO,
    DRVITEM_BITMAP_FILENAME_WO,
    DRVITEM_BITMAP_ANCHOR_WO,
    DRVITEM_BITMAP_FILL_WO,
    DRVITEM_INSIDE_COLOR_WO_H,
    DRVITEM_OUTLINE_COLOR_WO_H,
    DRVITEM_OUTLINE_WIDTH_WO_H,
    DRVITEM_OUTLINE_ROUND_WO_H,
    DRVITEM_BITMAP_FILENAME_WO_H,
    DRVITEM_BITMAP_ANCHOR_WO_H,
    DRVITEM_BITMAP_FILL_WO_H,
    DRVITEM_TEXT1_COLOR_WO,
    DRVITEM_TEXT2_COLOR_WO,

// MISSING
    DRVITEM_INSIDE_COLOR_MS,
    DRVITEM_OUTLINE_COLOR_MS,
    DRVITEM_OUTLINE_WIDTH_MS,
    DRVITEM_OUTLINE_ROUND_MS,
    DRVITEM_BITMAP_FILENAME_MS,
    DRVITEM_BITMAP_ANCHOR_MS,
    DRVITEM_BITMAP_FILL_MS,
    DRVITEM_INSIDE_COLOR_MS_H,
    DRVITEM_OUTLINE_COLOR_MS_H,
    DRVITEM_OUTLINE_WIDTH_MS_H,
    DRVITEM_OUTLINE_ROUND_MS_H,
    DRVITEM_BITMAP_FILENAME_MS_H,
    DRVITEM_BITMAP_ANCHOR_MS_H,
    DRVITEM_BITMAP_FILL_MS_H,
    DRVITEM_TEXT1_COLOR_MS,
    DRVITEM_TEXT2_COLOR_MS,

// INVALID
    DRVITEM_INSIDE_COLOR_IN,
    DRVITEM_OUTLINE_COLOR_IN,
    DRVITEM_OUTLINE_WIDTH_IN,
    DRVITEM_OUTLINE_ROUND_IN,
    DRVITEM_BITMAP_FILENAME_IN,
    DRVITEM_BITMAP_ANCHOR_IN,
    DRVITEM_BITMAP_FILL_IN,
    DRVITEM_INSIDE_COLOR_IN_H,
    DRVITEM_OUTLINE_COLOR_IN_H,
    DRVITEM_OUTLINE_WIDTH_IN_H,
    DRVITEM_OUTLINE_ROUND_IN_H,
    DRVITEM_BITMAP_FILENAME_IN_H,
    DRVITEM_BITMAP_ANCHOR_IN_H,
    DRVITEM_BITMAP_FILL_IN_H,
    DRVITEM_TEXT1_COLOR_IN,
    DRVITEM_TEXT2_COLOR_IN,

// DUP
    DRVITEM_INSIDE_COLOR_DP,
    DRVITEM_OUTLINE_COLOR_DP,
    DRVITEM_OUTLINE_WIDTH_DP,
    DRVITEM_OUTLINE_ROUND_DP,
    DRVITEM_BITMAP_FILENAME_DP,
    DRVITEM_BITMAP_ANCHOR_DP,
    DRVITEM_BITMAP_FILL_DP,
    DRVITEM_INSIDE_COLOR_DP_H,
    DRVITEM_OUTLINE_COLOR_DP_H,
    DRVITEM_OUTLINE_WIDTH_DP_H,
    DRVITEM_OUTLINE_ROUND_DP_H,
    DRVITEM_BITMAP_FILENAME_DP_H,
    DRVITEM_BITMAP_ANCHOR_DP_H,
    DRVITEM_BITMAP_FILL_DP_H,
    DRVITEM_TEXT1_COLOR_DP,
    DRVITEM_TEXT2_COLOR_DP,

// NOT-FOUND,MISSING
    DRVITEM_INSIDE_COLOR_NM,
    DRVITEM_OUTLINE_COLOR_NM,
    DRVITEM_OUTLINE_WIDTH_NM,
    DRVITEM_OUTLINE_ROUND_NM,
    DRVITEM_BITMAP_FILENAME_NM,
    DRVITEM_BITMAP_ANCHOR_NM,
    DRVITEM_BITMAP_FILL_NM,
    DRVITEM_INSIDE_COLOR_NM_H,
    DRVITEM_OUTLINE_COLOR_NM_H,
    DRVITEM_OUTLINE_WIDTH_NM_H,
    DRVITEM_OUTLINE_ROUND_NM_H,
    DRVITEM_BITMAP_FILENAME_NM_H,
    DRVITEM_BITMAP_ANCHOR_NM_H,
    DRVITEM_BITMAP_FILL_NM_H,
    DRVITEM_TEXT1_COLOR_NM,
    DRVITEM_TEXT2_COLOR_NM,

// NOT-FOUND,INSTELLED_UNKNOWN
    DRVITEM_INSIDE_COLOR_NU,
    DRVITEM_OUTLINE_COLOR_NU,
    DRVITEM_OUTLINE_WIDTH_NU,
    DRVITEM_OUTLINE_ROUND_NU,
    DRVITEM_BITMAP_FILENAME_NU,
    DRVITEM_BITMAP_ANCHOR_NU,
    DRVITEM_BITMAP_FILL_NU,
    DRVITEM_INSIDE_COLOR_NU_H,
    DRVITEM_OUTLINE_COLOR_NU_H,
    DRVITEM_OUTLINE_WIDTH_NU_H,
    DRVITEM_OUTLINE_ROUND_NU_H,
    DRVITEM_BITMAP_FILENAME_NU_H,
    DRVITEM_BITMAP_ANCHOR_NU_H,
    DRVITEM_BITMAP_FILL_NU_H,
    DRVITEM_TEXT1_COLOR_NU,
    DRVITEM_TEXT2_COLOR_NU,

// NOT-FOUND,INSTALLED_STANDARD
    DRVITEM_INSIDE_COLOR_NS,
    DRVITEM_OUTLINE_COLOR_NS,
    DRVITEM_OUTLINE_WIDTH_NS,
    DRVITEM_OUTLINE_ROUND_NS,
    DRVITEM_BITMAP_FILENAME_NS,
    DRVITEM_BITMAP_ANCHOR_NS,
    DRVITEM_BITMAP_FILL_NS,
    DRVITEM_INSIDE_COLOR_NS_H,
    DRVITEM_OUTLINE_COLOR_NS_H,
    DRVITEM_OUTLINE_WIDTH_NS_H,
    DRVITEM_OUTLINE_ROUND_NS_H,
    DRVITEM_BITMAP_FILENAME_NS_H,
    DRVITEM_BITMAP_ANCHOR_NS_H,
    DRVITEM_BITMAP_FILL_NS_H,
    DRVITEM_TEXT1_COLOR_NS,
    DRVITEM_TEXT2_COLOR_NS,

    THEME_NM,
};

extern const int boxindex[BOX_NUM];
