#!/bin/sh

printf $(id -Gn  $FT_USER  | tr ' ' ',')
