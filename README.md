# Overview
* This repository is a clone of [Keyball by Yowkees](https://github.com/Yowkees/keyball).
* Custom keymap of `Keyball39`: [keyball39:custom](./qmk_firmware/keyboards/keyball/keyball39/keymaps/custom/keymap.c). 
* Changed `Keyball61` content to support `Automatic Mouse Layer`: [keyball61:default_custom](./qmk_firmware/keyboards/keyball/keyball61/keymaps/default_custom/keymap.c).
* Confirmed with `qmk 0.19.2` on macOS arm64.

# Firmware build
```shell
# keyball39
make -C qmk_root_dir keyball/keyball39:custom

# keyball61
make -C qmk_root_dir keyball/keyball61:default_custom
```

# Reference
* [qmk keycodes overview](https://github.com/qmk/qmk_firmware/blob/master/docs/keycodes.md)
* [Keyball61ユーザーがKeyball44も作ってみた](https://wonwon-eater.com/keyball44/)
* [QMKのファームウェアが破壊的なアップデートをして昔のプログラムがエラーになるので修正する方法](http://www.neko.ne.jp/~freewing/hardware/qmk_update_program_with_newest_firmware_2022/)

<br><br><br>

Original Readme of Keyball see below.

------------------------------------

<br>

# keyball

Keyball is split keyboard has 100% track ball

## Firmware build guide

Keyball46 have separate firmwares for each of PCBs w/ trackball and w/o
trackball.  You can build those with this commands in root of QMK firmware
source tree.

```console
$ make keyball/rev1/ball:via
$ make keyball/rev1/noball:via
```

You will get two files:

* `keyball_rev1_ball_via.hex` - Trackball PCB firmware with VIA support.
* `keyball_rev1_noball_via.hex` - No trackball PCB firmware with VIA support.

Write each firmwares to correct PCB's Pro Micro.

In generally, you can build fimwares with this command.

```console
$ make keyball/rev1/ball:{YOUR_FAVORITE_KEYMAP}
$ make keyball/rev1/noball:{YOUR_FAVORITE_KEYMAP}
```

### Keyamaps

Keyball46 provides some keymaps as default:

* `via` - VIA support, trackball is on right side
* `via_Left` - VIA support, trackball is on left side
* `test` - Test for building/soldering Keyball46 (w/ right trackball)
* `default` - Template for customized keymap (w/ right trackball)

### Prerequirements to build firmware

1. Checkout [QMK firmware source codes](https://github.com/qmk/qmk_firmware)
2. Setup QMK correctly ([See also](https://beta.docs.qmk.fm/tutorial/newbs_getting_started))
3. Copy `./qmk_firmware/keyboards/keyball/` directory in this repository to QMK firmware's dir as `{QMK_FIRMWARE_ROOT}/keyboards/keyball`.
4. Build Keyball46 firmwares (See above section)

    ```console
    $ make keyball/rev1/ball:via
    $ make keyball/rev1/noball:via
    ```
