#!/bin/sh
set -eu

/usr/bin/env python3 "$@" -Dq='2**174 - 17' -Dmodulus_bytes='19 + 1/3' -Da24='121665'
