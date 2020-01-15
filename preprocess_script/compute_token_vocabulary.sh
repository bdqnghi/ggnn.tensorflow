DATA=sample_data
DATASET=java-small-graph
TRAIN_DIR=../${DATA}/${DATASET}/training
TOKEN_VOCAB_PATH=../preprocessed_data/token_vocab.txt

PYTHON=python3

${PYTHON} compute_token_vocabulary.py --input ${TRAIN_DIR} --output ${TOKEN_VOCAB_PATH} 
