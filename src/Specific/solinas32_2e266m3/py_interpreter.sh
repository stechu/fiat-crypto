#!/bin/sh
set -eu

/usr/bin/env python3 "$@" -Dq='2**266 - 3' -Dmodulus_bytes='22 + 1/6' -Da24='121665'
