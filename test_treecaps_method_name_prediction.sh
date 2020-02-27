DATA=sample_data
DATASET=java-small
DATASET_TRANSFORMED=${DATASET}-pkl
TRAIN_PATH=${DATA}/${DATASET_TRANSFORMED}/training
VAL_PATH=${DATA}/${DATASET_TRANSFORMED}/test
NODE_TYPE_VOCABULARY_PATH=preprocessed_data/node_type_vocab.txt
TOKEN_VOCABULARY_PATH=preprocessed_data/treecaps/${DATASET}/token_vocab.txt
TRAIN_LABEL_VOCABULARY_PATH=preprocessed_data/treecaps/${DATASET}/train_label_vocab.txt
VAL_LABEL_VOCABULARY_PATH=preprocessed_data/treecaps/${DATASET}/val_label_vocab.txt
BATCH_SIZE=1
VAL_BATCH_SIZE=32
SAMPLING_SIZE=1
CHECKPOINT_EVERY=10
TREE_SIZE_THRESHOLD_UPPER=1500
TREE_SIZE_THRESHOLD_LOWER=20
CUDA=0
VALIDATING=1
NODE_TYPE_DIM=30
NODE_TOKEN_DIM=50
TOP_A=15
TOP_B=20
NUM_CONV=8
OUTPUT_SIZE=128
CAPS1_NUM_DIMS=8
CAPS1_OUT_DIMS=8
NUM_FILES_THRESHOLD=20000
TASK=0
PYTHON=python3
${PYTHON} train_treecaps_method_name_prediction.py \
--dataset ${DATASET} \
--train_path ${TRAIN_PATH} --val_path ${VAL_PATH} --batch_size ${BATCH_SIZE} \
--val_batch_size ${VAL_BATCH_SIZE} --sampling_size ${SAMPLING_SIZE} --checkpoint_every \
${CHECKPOINT_EVERY} --cuda ${CUDA} --validating ${VALIDATING} \
--tree_size_threshold_upper ${TREE_SIZE_THRESHOLD_UPPER} \
--tree_size_threshold_lower ${TREE_SIZE_THRESHOLD_LOWER} \
--node_type_dim ${NODE_TYPE_DIM} --node_token_dim ${NODE_TOKEN_DIM} \
--node_type_vocabulary_path ${NODE_TYPE_VOCABULARY_PATH} \
--token_vocabulary_path ${TOKEN_VOCABULARY_PATH} \
--train_label_vocabulary_path ${TRAIN_LABEL_VOCABULARY_PATH} \
--val_label_vocabulary_path ${VAL_LABEL_VOCABULARY_PATH} \
--task ${TASK} \
--top_a ${TOP_A} --top_b ${TOP_B} --num_conv ${NUM_CONV} --output_size ${OUTPUT_SIZE} \
--caps1_num_dims ${CAPS1_NUM_DIMS} --caps1_out_dims ${CAPS1_OUT_DIMS} --num_files_threshold ${NUM_FILES_THRESHOLD}