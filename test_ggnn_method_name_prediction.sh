DATA=sample_data
DATASET=java-small
DATASET_TRANSFORMED=${DATASET}-graph-transformed
VAL_PATH=${DATA}/${DATASET_TRANSFORMED}/testing
NODE_TYPE_VOCABULARY_PATH=preprocessed_data/node_type_vocab.txt
TOKEN_VOCABULARY_PATH=preprocessed_data/ggnn/${DATASET}/token_vocab.txt
TRAIN_LABEL_VOCABULARY_PATH=preprocessed_data/ggnn/${DATASET}/train_label_vocab.txt
VAL_LABEL_VOCABULARY_PATH=preprocessed_data/ggnn/${DATASET}/test_label_vocab.txt
PREDICTIONS_OUTPUT=predictions/original_predictions.txt
BATCH_SIZE=32
VAL_BATCH_SIZE=10
GRAPH_SIZE_THRESHOLD_LOWER=1500
SAMPLING_SIZE=1
CUDA=-1
NODE_TYPE_DIM=30
NODE_TOKEN_DIM=50
PYTHON=python3
TASK=0
${PYTHON} train_ggnn_method_name_prediction.py --val_path ${VAL_PATH} --batch_size ${BATCH_SIZE} \
--dataset ${DATASET} \
--val_batch_size ${VAL_BATCH_SIZE} --sampling_size ${SAMPLING_SIZE} --cuda ${CUDA} --node_type_dim ${NODE_TYPE_DIM} \
--node_token_dim ${NODE_TOKEN_DIM} \
--node_type_dim ${NODE_TYPE_DIM} --node_token_dim ${NODE_TOKEN_DIM} \
--node_type_vocabulary_path ${NODE_TYPE_VOCABULARY_PATH} \
--token_vocabulary_path ${TOKEN_VOCABULARY_PATH} \
--train_label_vocabulary_path ${TRAIN_LABEL_VOCABULARY_PATH} \
--val_label_vocabulary_path ${VAL_LABEL_VOCABULARY_PATH} \
--task ${TASK} --predictions_ouput ${PREDICTIONS_OUTPUT}