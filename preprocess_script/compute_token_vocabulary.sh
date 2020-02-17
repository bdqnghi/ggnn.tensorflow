DATA=sample_data
DATASET=java-small
DATASET_GRAPH=${DATASET}-graph
MODEL=treecaps
TRAIN_DIR=../${DATA}/${DATASET_GRAPH}/training
TOKEN_VOCAB_PATH=../preprocessed_data/${MODEL}/${DATASET}/token_vocab.txt
PYTHON=python3
${PYTHON} compute_token_vocabulary.py --input ${TRAIN_DIR} --output ${TOKEN_VOCAB_PATH} 
