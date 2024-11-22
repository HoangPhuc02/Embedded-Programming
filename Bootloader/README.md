# BootloaderProjectSTM32
This is the repo for BootLoader Development for STM32  Udemy online course


STM32_Project/
├── Bootloader/                   # Code liên quan đến Bootloader
│   ├── Inc/                      # Header files
│   │   ├── bootloader.h          # Hàm chính và định nghĩa của bootloader
│   │   ├── flash_manager.h       # Giao diện quản lý flash
│   │   ├── crc_check.h           # CRC kiểm tra tính toàn vẹn
│   │   ├── uart_protocol.h       # UART protocol giao tiếp với host
│   │   ├── can_protocol.h        # CAN protocol (nếu dùng CAN giao tiếp)
│   │   ├── security.h            # Xử lý mã hóa, giải mã, xác thực
│   │   ├── crypto_utils.h        # Hàm tiện ích mã hóa
│   │   └── firmware_update.h     # Quản lý và xác thực firmware mới
│   ├── Src/                      # Source files
│   │   ├── main.c                # Main loop của bootloader
│   │   ├── bootloader.c          # Xử lý logic bootloader
│   │   ├── flash_manager.c       # Thao tác flash (ghi, xóa)
│   │   ├── crc_check.c           # Hàm tính CRC
│   │   ├── uart_protocol.c       # Giao tiếp UART
│   │   ├── can_protocol.c        # Giao tiếp CAN
│   │   ├── security.c            # Xử lý mã hóa/giải mã
│   │   ├── crypto_utils.c        # Hàm tiện ích mã hóa
│   │   └── firmware_update.c     # Quản lý nhận và cập nhật firmware
│   └── Scripts/                  # Script build và flash bootloader
│       ├── build_bootloader.sh
│       ├── flash_bootloader.sh
│       ├── debug_bootloader.sh
│       └── sign_firmware.py      # Ký firmware trước khi gửi
├── Application/                  # Code chính của ứng dụng
│   ├── Inc/                      # Header files
│   │   ├── main.h                # Hàm chính của ứng dụng
│   │   ├── app_logic.h           # Xử lý logic của ứng dụng
│   │   ├── peripherals.h         # Cấu hình ngoại vi
│   │   ├── user_interface.h      # Giao diện người dùng
│   │   └── firmware_handler.h    # Quản lý phiên bản firmware
│   ├── Src/                      # Source files
│   │   ├── main.c                # Main loop của ứng dụng
│   │   ├── app_logic.c           # Hàm xử lý chính
│   │   ├── peripherals.c         # Khởi tạo và quản lý ngoại vi
│   │   ├── user_interface.c      # Hàm liên quan đến giao diện người dùng
│   │   └── firmware_handler.c    # Xử lý cập nhật firmware
├── Common/                       # Thành phần chung cho Bootloader và Application
│   ├── Inc/
│   │   ├── memory_map.h          # Vùng nhớ Flash/RAM
│   │   ├── shared_definitions.h  # Định nghĩa dùng chung (struct, enums)
│   │   ├── firmware_format.h     # Định dạng firmware chung
│   ├── Src/
│   │   ├── crc_common.c          # Hàm CRC dùng chung
│   │   └── firmware_format.c     # Xử lý định dạng firmware
├── Config/                       # Các file cấu hình
│   ├── bootloader_config.h       # Cấu hình Bootloader (timeout, giao thức)
│   ├── app_config.h              # Cấu hình ứng dụng
│   ├── crypto_config.h           # Cấu hình mã hóa (khóa, thuật toán)
│   ├── linker_bootloader.ld      # Linker script của Bootloader
│   ├── linker_application.ld     # Linker script của Ứng dụng
│   └── startup_stm32.s           # File startup assembly (nếu cần tinh chỉnh)
├── Drivers/                      # Driver HAL hoặc CMSIS
│   ├── HAL/                      # HAL Library từ STM32Cube
│   ├── CMSIS/                    # CMSIS từ ST
│   ├── BSP/                      # Board Support Package (nếu dùng)
│   └── Custom_Drivers/           # Driver tùy chỉnh của bạn
├── Middlewares/                  # Middlewares, stack giao thức
│   ├── FreeRTOS/                 # Nếu sử dụng RTOS
│   ├── USB/                      # USB stack (CDC, HID, MSC)
│   ├── LWIP/                     # Nếu dùng giao thức mạng (TCP/IP)
│   ├── Crypto/                   # Thư viện mã hóa và bảo mật
│   │   ├── aes.c                 # Mã hóa AES
│   │   ├── rsa.c                 # Thuật toán RSA
│   │   ├── sha256.c              # Tạo hash SHA256
│   │   ├── hmac.c                # HMAC
│   │   └── random.c              # Sinh số ngẫu nhiên
│   └── Custom_Stacks/            # Middleware tùy chỉnh
├── Scripts/                      # Script build và quản lý dự án
│   ├── build_all.sh              # Build tất cả
│   ├── clean.sh                  # Dọn dẹp file build
│   ├── flash_all.sh              # Flash Bootloader và Application
│   └── encrypt_firmware.py       # Mã hóa firmware trước khi gửi
├── Tests/                        # Unit Test và Test Framework
│   ├── Bootloader_Tests/         # Test Bootloader
│   │   ├── test_crc.c            # Test CRC kiểm tra
│   │   ├── test_flash_manager.c  # Test ghi/xóa flash
│   │   ├── test_security.c       # Test mã hóa/giải mã
│   │   ├── test_protocol.c       # Test giao tiếp UART/CAN
│   └── Application_Tests/        # Test Ứng dụng
│       ├── test_app_logic.c      # Test logic ứng dụng
│       ├── test_peripherals.c    # Test ngoại vi
│       └── test_firmware.c       # Test quản lý firmware
├── Documentation/                # Tài liệu và hướng dẫn
│   ├── Design_Document.md        # Mô tả thiết kế hệ thống
│   ├── Bootloader_Workflow.md    # Quy trình hoạt động Bootloader
│   ├── Firmware_Update.md        # Quy trình cập nhật Firmware
│   ├── Security_Implementation.md# Tích hợp bảo mật và mã hóa
│   └── Memory_Layout.md          # Sơ đồ vùng nhớ
└── README.md                     # Hướng dẫn sử dụng dự án



//STM32CubeIDE không trực tiếp hỗ trợ việc chạy các script shell (.sh) hoặc Python (.py) trong quá trình build. Tuy nhiên, bạn có thể cấu hình STM32CubeIDE để gọi các script này bằng cách sử dụng các bước build tùy chỉnh (custom build steps). Dưới đây là cách bạn có thể làm điều đó:

1. Cài Đặt Môi Trường
Trước tiên, bạn cần đảm bảo rằng môi trường của bạn có thể chạy các script shell và Python. Trên Windows, bạn có thể sử dụng Git Bash hoặc Cygwin để chạy các script shell.

2. Cấu Hình Build Steps Trong STM32CubeIDE
Bạn có thể thêm các bước build tùy chỉnh trong STM32CubeIDE để gọi các script của bạn.

Thêm Build Steps Tùy Chỉnh
Mở Project Properties:

Nhấp chuột phải vào dự án của bạn trong Project Explorer và chọn Properties.
Cấu Hình Build Steps:

Trong cửa sổ Properties, điều hướng đến C/C++ Build -> Settings.
Chọn tab Build Steps.
Thêm Pre-build và Post-build Steps:

Pre-build Steps: Thêm các lệnh để chạy trước khi build, ví dụ:
Post-build Steps: Thêm các lệnh để chạy sau khi build, ví dụ:
Ví Dụ Cụ Thể
Pre-build Step
Giả sử bạn có một script build_all.sh để build tất cả các thành phần của dự án trước khi build chính dự án:

Post-build Step
Giả sử bạn có một script encrypt_firmware.py để mã hóa firmware sau khi build:

Cấu Hình Trong STM32CubeIDE
Mở Project Properties:

Nhấp chuột phải vào dự án của bạn trong Project Explorer và chọn Properties.
Điều Hướng Đến Build Steps:

Trong cửa sổ Properties, điều hướng đến C/C++ Build -> Settings.
Chọn tab Build Steps.
Thêm Pre-build Step:

Trong phần Pre-build Steps, thêm lệnh sau:
Thêm Post-build Step:

Trong phần Post-build Steps, thêm lệnh sau:
Lưu Ý
Đảm bảo rằng các script của bạn có quyền thực thi (executable).
Đảm bảo rằng đường dẫn đến các script là chính xác và tương đối so với thư mục gốc của dự án.
Kết Luận
Bằng cách thêm các bước build tùy chỉnh trong STM32CubeIDE, bạn có thể gọi các script shell và Python trong quá trình build của mình. Điều này giúp tự động hóa các tác vụ như build tất cả các thành phần, mã hóa firmware, và các tác vụ khác liên quan đến quá trình phát triển và triển khai dự án.