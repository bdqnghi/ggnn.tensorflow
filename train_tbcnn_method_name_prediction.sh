DATA=sample_data
DATASET=java-small
DATASET_TRANSFORMED=${DATASET}-pkl
TRAIN_PATH=${DATA}/${DATASET_TRANSFORMED}/training
VAL_PATH=${DATA}/${DATASET_TRANSFORMED}/validation
NODE_TYPE_VOCABULARY_PATH=preprocessed_data/node_type_vocab.txt
TOKEN_VOCABULARY_PATH=preprocessed_data/treecaps/${DATASET}/token_vocab.txt
TRAIN_LABEL_VOCABULARY_PATH=preprocessed_data/treecaps/${DATASET}/train_label_vocab.txt
VAL_LABEL_VOCABULARY_PATH=preprocessed_data/treecaps/${DATASET}/val_label_vocab.txt
BATCH_SIZE=3
VAL_BATCH_SIZE=32
SAMPLING_SIZE=1
CHECKPOINT_EVERY=10
TREE_SIZE_THRESHOLD=1500
CUDA=0
VALIDATING=1
NODE_TYPE_DIM=30
NODE_TOKEN_DIM=50
NUM_CONV=1

TASK=1
PYTHON=python3
${PYTHON} train_tbcnn_method_name_prediction.py \
--dataset ${DATASET} \
--train_path ${TRAIN_PATH} --val_path ${VAL_PATH} --batch_size ${BATCH_SIZE} \
--val_batch_size ${VAL_BATCH_SIZE} --sampling_size ${SAMPLING_SIZE} --checkpoint_every \
${CHECKPOINT_EVERY} --cuda ${CUDA} --validating ${VALIDATING} --tree_size_threshold ${TREE_SIZE_THRESHOLD} \
--node_type_dim ${NODE_TYPE_DIM} --node_token_dim ${NODE_TOKEN_DIM} \
--node_type_vocabulary_path ${NODE_TYPE_VOCABULARY_PATH} \
--token_vocabulary_path ${TOKEN_VOCABULARY_PATH} \
--train_label_vocabulary_path ${TRAIN_LABEL_VOCABULARY_PATH} \
--val_label_vocabulary_path ${VAL_LABEL_VOCABULARY_PATH} \
--task ${TASK} \
--num_conv ${NUM_CONV}