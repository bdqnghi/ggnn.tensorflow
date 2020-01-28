DATA=sample_data
DATASET=java-small
VAL_PATH=${DATA}/java-small-graph-transformed/testing
NODE_TYPE_VOCABULARY_PATH=preprocessed_data/${DATASET}/node_type_vocab.txt
TOKEN_VOCABULARY_PATH=preprocessed_data/${DATASET}/token_vocab.txt
TRAIN_LABEL_VOCABULARY_PATH=preprocessed_data/${DATASET}/train_label_vocab.txt
VAL_LABEL_VOCABULARY_PATH=preprocessed_data/${DATASET}/test_label_vocab.txt
BATCH_SIZE=32
VAL_BATCH_SIZE=3
SAMPLING_SIZE=1
CUDA=-1
NODE_TYPE_DIM=30
NODE_TOKEN_DIM=50
PYTHON=python3
${PYTHON} test_ggnn_method_name_prediction.py --val_path ${VAL_PATH} --batch_size ${BATCH_SIZE} \
--val_batch_size ${VAL_BATCH_SIZE} --sampling_size ${SAMPLING_SIZE} --cuda ${CUDA} --node_type_dim ${NODE_TYPE_DIM} \
--node_token_dim ${NODE_TOKEN_DIM} \
--node_type_dim ${NODE_TYPE_DIM} --node_token_dim ${NODE_TOKEN_DIM} \
--node_type_vocabulary_path ${NODE_TYPE_VOCABULARY_PATH} \
--token_vocabulary_path ${TOKEN_VOCABULARY_PATH} \
--train_label_vocabulary_path ${TRAIN_LABEL_VOCABULARY_PATH} \
--val_label_vocabulary_path ${VAL_LABEL_VOCABULARY_PATH} \