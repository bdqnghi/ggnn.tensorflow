mkdir -p cpp_babi_format
mkdir -p cpp_protobuf_format
rm -f maps.pkl
for index in {1..104}; do
    if [ ! -f cpp_protobuf_format/$index.fbs ]; then
        fast -S -G CppProgramData/$index cpp_protobuf_format/$index.fbs
    fi
    ggnn cpp_protobuf_format/$index.fbs cpp_babi_format/train/train_$index.txt cpp_babi_format/test/test_$index.txt
done