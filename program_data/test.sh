has_docker=1
command -v docker >/dev/null 2>&1 || {
  has_docker=0
}
if [ "$has_docker" == "1" ]; then
   docker build -t progress ../progress
fi
NVIDIA=
if [ "$has_docker" == "1" ]; then
  NVIDIA="nvidia-docker run -v $(dirname $(pwd)):/e -w /e --shm-size 11G --rm -it progress"
fi
function size_voc() {
	cd $1 > /dev/null
        lang=$(ls maps.*.pkl)
        lang=${lang/maps./}
        lang=${lang/.pkl/}
	if [ "$has_docker" == "1" ]; then
	   k=$(docker run -v $(pwd):/e --entrypoint /opt/bin/maps -it yijun/fast:built --lang $lang | sort -n | wc -l)
        else
	   k=$(python $p/ggnn/maps.py --lang $lang | sort -n | wc -l)
	fi
	cd - > /dev/null
	echo $((k-1))
}
function mll_test() {
   echo === MLL $1 $2 $(($3+1)) ===
	lang1=$1
	lang2=${lang1/java/cpp}
	n=$2
	k=$(size_voc $lang1)
	cd .. > /dev/null
		NV_GPU=0 \
	  /usr/bin/time -f %e \
	  $NVIDIA \
	  python main_ggnn.py \
		--cuda \
		--testing --epoch $3\
		--n_classes $n \
		--directory  program_data/$lang1 \
		--model_path program_data/$lang1/$n.cpkl \
		--state_dim 5 \
		--n_steps 5 \
		--n_hidden 50 \
		--niter 1 \
		--size_vocabulary $k \
		--train_batch_size 32 \
		--test_batch_size 32
	cd - > /dev/null
}
function cll_test() {
   echo === CLL $1 $2 $(($3+1)) ===
	lang1=$1
	lang2=cll_${lang1/cpp/java}
	n=$2
	k=$(size_voc $lang1)
	cd .. > /dev/null
		NV_GPU=0 \
	  /usr/bin/time -f %e \
	  $NVIDIA \
	  python main_biggnn.py \
		--cuda \
		--testing --epoch $3\
		--n_classes $n \
		--left_directory  program_data/$lang1 \
		--right_directory program_data/$lang2 \
		--model_path program_data/$lang1/cll-$n.cpkl \
		--state_dim 5 \
		--n_steps 5 \
		--n_hidden 50 \
		--niter 1 \
		--size_vocabulary $k \
		--train_batch_size 32 \
		--test_batch_size 32
	cd - > /dev/null
}
function pick_model() {
   m=0
   model=$1
   if [ -f $model ]; then
      m=$(ls $model.* | cut -d"." -f3 | sort -n | tail -1)
   fi
   echo $m
}
function test() {
   n=$1
   folder=$2
   m=$(pick_model $folder/$n.cpkl)
   if [ "$m" != "" ]; then
       mll_test $folder $n $m
   fi
   m=$(pick_model $folder/cll-$n.cpkl)
   if [ "$m" != "" ]; then
       cll_test $folder $n $m
   fi
   folder=${folder/cpp/java}
   m=$(pick_model $folder/$n.cpkl)
   if [ "$m" != "" ]; then
       mll_test $folder $n $m
   fi
}
ver=Oct-15-2018-0000029
if [ "$1" == "" ]; then
	for n in 104 50 25 10; do
	   test $n cpp_babi_format_$ver | tee -a status.log
	done
	for n in 50 30 10; do
	   test $n github_cpp_babi_format_$ver | tee -a status.log
	done
elif [ "$1" == "java" ]; then
	mll_test java_babi_format_$ver $2 $(pick_model java_babi_format_$ver28/$2.cpkl) | tee -a status.log
elif [ "$1" == "cpp" ]; then
	mll_test cpp_babi_format_$ver $2 $(pick_model cpp_babi_format_$ver28/$2.cpkl) | tee -a status.log
elif [ "$1" == "biggnn" ]; then
	cll_test cpp_babi_format_$ver $2 $(pick_model cpp_babi_format_$ver28/cll-$2.cpkl) | tee -a status.log
elif [ "$1" == "github_java" ]; then
	mll_test github_java_babi_format_$ver $2 $(pick_model github_java_babi_format_$ver28/$2.cpkl) | tee -a status.log
elif [ "$1" == "github_cpp" ]; then
	mll_test github_cpp_babi_format_$ver $2 $(pick_model github_cpp_babi_format_$ver28/$2.cpkl) | tee -a status.log
elif [ "$1" == "github_biggnn" ]; then
	cll_test github_cpp_babi_format_$ver $2 $(pick_model github_cpp_babi_format_$ver28/cll-$2.cpkl) | tee -a status.log
fi
