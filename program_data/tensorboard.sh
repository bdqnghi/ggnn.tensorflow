has_docker=1
command -v docker >/dev/null 2>&1 || {
  has_docker=0
}
DOCKER=
if [ "$has_docker" == "1" ]; then
   DOCKER="docker run --rm -p 0.0.0.0:6007:6006 -v $(pwd):/e -w /e -it tensorflow/tensorflow"
fi
if [ "$1" == "" ]; then
   $DOCKER tensorboard --logdir=github_cpp_babi_format_Oct-15-2018-0000029/logs
else
   $DOCKER tensorboard --logdir=cpp_babi_format_Oct-15-2018-0000029/logs
fi
